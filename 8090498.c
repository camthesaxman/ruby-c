int __fastcall sub_8090498(unsigned __int8 a1)
{
  int v1; // r2@1
  int v2; // r0@2
  int *v3; // r1@4
  int (__fastcall *v4)(unsigned __int8); // r0@4
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = *(_BYTE *)(v202FFB4 + 1615);
    if ( v2 != 1 && v2 == 2 )
    {
      v3 = &dword_3004B20[10 * v1];
      v4 = sub_808FA64;
    }
    else
    {
      v3 = &dword_3004B20[10 * v1];
      v4 = sub_808F2B0;
    }
    *v3 = (int)v4;
  }
  return v6;
}
