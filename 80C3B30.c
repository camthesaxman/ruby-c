int __fastcall sub_80C3B30(unsigned __int8 a1)
{
  unsigned __int8 v1; // r12@1
  signed int v2; // r5@1
  int v3; // r1@4
  int v4; // r4@5
  signed int v5; // r3@5
  _WORD *v6; // r2@5
  int *v7; // r0@8
  int v9; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( v2038690 )
  {
    do
      ++v2;
    while ( v2 <= 3 && *(_BYTE *)(v2 + 33785488) );
  }
  v3 = 0;
  do
  {
    v4 = v3 + 1;
    v5 = 29;
    v6 = (_WORD *)(2 * (32 * v3 + 96 * v2) + 100720896);
    do
    {
      *v6 = *v6 & 0xFFF | 0x9000;
      ++v6;
      --v5;
    }
    while ( v5 >= 0 );
    ++v3;
  }
  while ( v4 <= 2 );
  v7 = &dword_3004B20[10 * a1];
  *((_WORD *)v7 + 14) = v2;
  *((_WORD *)v7 + 16) = 1;
  *v7 = (int)sub_80C3BD8;
  v2018003 = v1;
  return v9;
}
