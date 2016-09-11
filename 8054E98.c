int sub_8054E98()
{
  unsigned __int16 v1; // [sp+0h] [bp-Ch]@1
  unsigned __int16 v2; // [sp+2h] [bp-Ah]@1
  int v3; // [sp+8h] [bp-4h]@1

  sav1_camera_get_focus_coords(&v1, &v2);
  sub_8056C50((v1 + (unsigned __int8)byte_3004860) & 0xFFFF, v2);
  return v3;
}
