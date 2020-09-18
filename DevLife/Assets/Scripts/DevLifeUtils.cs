using UnityEngine;

public class DevLifeUtils
{
        public static Vector3 ChangeX(Vector3 p, float value)
        {
                return new Vector3(value, p.y, p.z);
        }
        
        public static Vector2 ChangeX(Vector2 p, float value)
        {
                return new Vector2(value, p.y);
        }
        
        public static Vector3 ChangeY(Vector3 p, float value)
        {
                return new Vector3(p.x, value, p.z);
        }
        
        public static Vector2 ChangeY(Vector2 p, float value)
        {
                return new Vector2(p.x, value);
        }
}