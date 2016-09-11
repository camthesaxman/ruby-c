int __fastcall sub_80C3EA4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r5@1
  __int16 v3; // r0@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_BYTE *)v1 + 8);
  v3 = *((_WORD *)v1 + 14);
  *((_WORD *)v1 + 14) = v3 + 1;
  if ( v3 == *((_WORD *)v1 + 5) )
  {
    *((_WORD *)v1 + 14) = 0;
    sub_80C3024(*((_WORD *)v1 + 6), v2, *((_BYTE *)v1 + 30), 0, *(_DWORD *)((v2 << 6) + 0x20385A8));
    *((_WORD *)v1 + 15) ^= 1u;
  }
  return v5;
}
