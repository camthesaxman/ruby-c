int __fastcall sub_812FC68(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r7@1
  int *v3; // r4@1
  __int16 *v4; // r5@1
  int *v5; // r3@4
  int v6; // r4@4
  __int16 v7; // r0@6
  int *v8; // r1@9
  __int16 v9; // r0@9
  int v10; // r0@12
  int v12; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = &dword_3004B20[10 * a1];
  *((_WORD *)v3 + 19) = *(_BYTE *)(v202F7C8 + 0x2024BE0);
  v4 = word_3004B00;
  *((_WORD *)v3 + 18) = word_3004B00[0];
  *((_WORD *)v3 + 4) = word_3004B00[0];
  *((_WORD *)v3 + 17) = word_3004B0C;
  if ( word_3004B06 )
    *((_WORD *)v3 + 10) |= 0x8000u;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *((_WORD *)v3 + 6) = word_3004B02;
    *((_WORD *)v3 + 7) = word_3004B04;
    v5 = dword_3004B20;
    v6 = v2;
  }
  else
  {
    if ( word_3004B02 & 0x8000 )
      v7 = word_3004B02 & 0x7FFF;
    else
      v7 = word_3004B02 | 0x8000;
    *((_WORD *)v3 + 6) = v7;
    v4 = word_3004B00;
    if ( word_3004B04 & 0x8000 )
    {
      v5 = dword_3004B20;
      v6 = 4 * v1;
      v8 = &dword_3004B20[10 * v1];
      v9 = word_3004B04 & 0x7FFF;
    }
    else
    {
      v5 = dword_3004B20;
      v6 = 4 * v1;
      v8 = &dword_3004B20[10 * v1];
      v9 = word_3004B04 | 0x8000;
    }
    *((_WORD *)v8 + 7) = v9;
  }
  v10 = (int)&v5[2 * (v6 + v1)];
  *(_WORD *)(v10 + 24) = 0;
  *(_WORD *)(v10 + 22) = 0;
  *(_WORD *)(v10 + 16) = v4[4];
  *(_WORD *)(v10 + 18) = v4[5];
  *(_DWORD *)v10 = sub_812FAF8;
  return v12;
}
