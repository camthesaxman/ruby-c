int __fastcall sub_8044E74(unsigned __int8 a1)
{
  int *v1; // r3@1
  __int16 v2; // r0@1
  __int16 v3; // r2@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 15);
  *((_WORD *)v1 + 15) = v2 + 1;
  if ( !(v2 & 1) )
  {
    v3 = *((_WORD *)v1 + 19) - 1;
    *((_WORD *)v1 + 19) = v3;
    if ( v3 & 0x8000 )
      return v5;
    v4000052 = v3 | ((16 - v3) << 8);
  }
  if ( !*((_WORD *)v1 + 19) )
    *v1 = (int)sub_8044ECC;
  return v5;
}
