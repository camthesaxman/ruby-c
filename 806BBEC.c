int __fastcall sub_806BBEC(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  unsigned int v2; // r2@1
  __int16 v3; // r4@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+1Ch] [bp-4h]@3

  v1 = a1;
  memcpy(&v5, &gUnknown_08376CEC, 24);
  v2 = 0;
  v3 = v1 << 12;
  do
  {
    *(_WORD *)(2 * v2 + 0x6003CB0) = *((_WORD *)&v5 + v2) + v3;
    *(_WORD *)(2 * v2 + 0x6003CF0) = *((_WORD *)&v5 + v2 + 6) + v3;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 5 );
  return v6;
}
