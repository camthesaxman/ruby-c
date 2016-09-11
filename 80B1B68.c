int __fastcall sub_80B1B68(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  char *v2; // r2@1
  int *v3; // r1@1
  int v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * v201925C];
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_WORD *)v3 + 14) + 1664;
  *((_WORD *)v3 + 14) = v4;
  *((_WORD *)v2 + 18) += v4 << 16 >> 24;
  *((_WORD *)v3 + 14) = *((_BYTE *)v3 + 28);
  if ( (signed int)*((_WORD *)v2 + 18) > 0 )
    *((_WORD *)v2 + 18) = 0;
  if ( !*((_WORD *)v2 + 18) )
  {
    v201920A &= 0xBFu;
    DestroyTask(v1);
  }
  return v6;
}
