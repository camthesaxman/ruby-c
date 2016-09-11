int __fastcall sub_80A9058(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r4@2
  int v3; // r5@2
  int *v4; // r6@2
  unsigned int v5; // r0@2
  int v6; // r4@8
  __int16 v7; // r1@8
  int v8; // r1@8
  int v10; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
  {
    v2 = dword_3004B20;
    v3 = 4 * a1;
    v4 = &dword_3004B20[10 * a1];
    v5 = v202F7B8 / 12;
  }
  else
  {
    v2 = dword_3004B20;
    v3 = 4 * a1;
    v4 = &dword_3004B20[10 * a1];
    v5 = v202F7BC / 0xCu;
  }
  *((_WORD *)v4 + 19) = v5;
  if ( (signed int)(v5 << 16) <= 0 )
    *((_WORD *)v4 + 19) = 1;
  if ( (signed int)*((_WORD *)v4 + 19) > 16 )
    *((_WORD *)v4 + 19) = 16;
  v6 = (int)&v2[2 * (v3 + v1)];
  v7 = *(_WORD *)(v6 + 38) / 2;
  *(_WORD *)(v6 + 36) = v7;
  *(_WORD *)(v6 + 34) = v7 + (*(_WORD *)(v6 + 38) & 1);
  *(_WORD *)(v6 + 32) = 0;
  *(_WORD *)(v6 + 28) = word_3004B06;
  *(_WORD *)(v6 + 30) = word_3004B08;
  *(_WORD *)(v6 + 22) = (unsigned __int8)obj_id_for_side_relative_to_move(1);
  v8 = *(_WORD *)(v6 + 22);
  *(_WORD *)(v6 + 24) = *(_WORD *)&gSprites[68 * v8 + 36];
  *(_WORD *)(v6 + 26) = *(_WORD *)&gSprites[68 * v8 + 38];
  *(_WORD *)(v6 + 8) = 0;
  *(_WORD *)(v6 + 10) = word_3004B02;
  *(_WORD *)(v6 + 12) = word_3004B04;
  *(_DWORD *)v6 = sub_80A913C;
  return v10;
}
