int sub_80C5164()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = FindTaskIdByFunc((int)sub_80C5190);
  if ( v0 != 255 )
    ++LOWORD(dword_3004B20[10 * v0 + 2]);
  return v2;
}
