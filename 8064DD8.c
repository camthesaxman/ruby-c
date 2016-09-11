int sub_8064DD8()
{
  int v0; // r5@1
  int v2; // [sp+8h] [bp-4h]@0

  sub_8064470(byte_3004AE0);
  v0 = (unsigned __int8)CreateTask(sub_8064D38, 80);
  if ( !(dword_30048A0[9 * (unsigned __int8)byte_3004AE0] & 2) )
  {
    sub_80643A4((int)&dword_30048A0[9 * (unsigned __int8)byte_3004AE0]);
    HIWORD(dword_3004B20[10 * v0 + 2]) = 1;
  }
  return v2;
}
