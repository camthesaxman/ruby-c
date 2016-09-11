int __fastcall sub_80A8408(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  __int16 v3; // r7@1
  int i; // r1@3
  int *v5; // r0@5
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 1;
  v3 = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  if ( word_3004B08 > 5 )
    word_3004B08 = 5;
  for ( i = 0; i < word_3004B08; i = (i + 1) & 0xFF )
    v2 = 2 * v2 & 0xFF;
  v5 = &dword_3004B20[10 * v1];
  *((_WORD *)v5 + 4) = v3;
  *((_WORD *)v5 + 5) = word_3004B02;
  *((_WORD *)v5 + 6) = word_3004B04;
  *((_WORD *)v5 + 7) = word_3004B06;
  *((_WORD *)v5 + 8) = v2;
  *v5 = (int)sub_80A8488;
  call_via_r8(v1);
  return v7;
}
