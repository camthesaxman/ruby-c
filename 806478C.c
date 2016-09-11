signed int __fastcall sub_806478C(int a1)
{
  int v1; // r5@1
  signed int v2; // r6@1
  __int16 v3; // r1@4
  int v5; // [sp+0h] [bp-1Ch]@1
  char v6; // [sp+8h] [bp-14h]@1

  v1 = a1;
  memcpy(&v5, &gUnknown_083761E6, 6);
  memcpy(&v6, &gUnknown_083761EC, 3);
  v2 = 0;
  if ( *(_WORD *)(v1 + 54) && !(*(_WORD *)(v1 + 58) & 1) )
    little_step(v1, *(_WORD *)(v1 + 52) & 0xFF);
  *(_WORD *)(v1 + 38) = sub_80646C8(
                          (signed int)*(_WORD *)(v1 + 58) >> *(&v6 + *(_WORD *)(v1 + 54)),
                          *(_WORD *)(v1 + 56) & 0xFF);
  v3 = *(_WORD *)(v1 + 58) + 1;
  *(_WORD *)(v1 + 58) = v3;
  if ( v3 == *((_WORD *)&v5 + *(_WORD *)(v1 + 54)) << 16 >> 17 )
    v2 = 1;
  if ( v3 >= (signed int)*((_WORD *)&v5 + *(_WORD *)(v1 + 54)) )
  {
    *(_WORD *)(v1 + 38) = 0;
    v2 = 255;
  }
  return v2;
}
