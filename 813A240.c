int __fastcall sub_813A240(unsigned __int8 a1)
{
  _BYTE *v1; // r1@1
  signed __int16 v2; // r0@2
  char v3; // r0@5
  int v5; // [sp+0h] [bp-4h]@0

  v1 = &byte_3004B28[40 * a1];
  if ( (signed int)*((_WORD *)v1 + 2) <= 7 )
    v2 = *((_WORD *)v1 + 2) + 1;
  else
    v2 = 8;
  *((_WORD *)v1 + 4) = v2;
  if ( v201FE03 <= 7u )
    v3 = v201FE03 + 1;
  else
    v3 = 8;
  v201FE01 = v3;
  return v5;
}
