int __fastcall sub_80DD4D4(unsigned __int8 a1)
{
  int *v1; // r6@1
  int v2; // r9@1
  unsigned int v3; // r7@1
  int v4; // r10@1
  unsigned int v5; // r8@1
  int v6; // r5@3
  int v7; // r0@4
  unsigned int v8; // r4@6
  char v9; // r0@6
  int v11; // [sp+1Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  v3 = (((sub_8077ABC(v202F7C8, 1u) << 16) & 0xFFFFFFu) + 1572864) >> 16;
  v4 = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  v5 = (((sub_8077ABC(v202F7C9, 1u) << 16) & 0xFFFFFFu) + 1572864) >> 16;
  if ( (v202F7C8 ^ 2) == v202F7C9 )
    v5 = v3;
  v6 = sub_80DD8BC() & 0xFF;
  if ( v6 == 1 )
    LOWORD(v7) = 32;
  else
    v7 = 48 - 8 * v6;
  *((_WORD *)v1 + 12) = v7;
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 15) = 0;
  *((_WORD *)v1 + 13) = 0;
  *((_WORD *)v1 + 16) = 1;
  *((_WORD *)v1 + 14) = *((_WORD *)v1 + 12) / 8 - 1;
  *((_WORD *)v1 + 6) = 8 * v2;
  *((_WORD *)v1 + 7) = 8 * v3;
  *((_WORD *)v1 + 8) = 8 * (v4 - v2) / *((_WORD *)v1 + 12);
  *((_WORD *)v1 + 9) = (signed int)(8 * (v5 - v3)) / *((_WORD *)v1 + 12);
  *((_WORD *)v1 + 10) = 0;
  *((_WORD *)v1 + 11) = 0;
  v8 = (unsigned int)(sub_8076F98(0xC0u) << 24 >> 8) >> 16;
  v9 = sub_8076F98(0x3Fu);
  *((_WORD *)v1 + 17) = v8;
  *((_WORD *)v1 + 18) = (v9 - (signed __int16)v8) / *((_WORD *)v1 + 12);
  *((_WORD *)v1 + 5) = v6;
  *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *v1 = (int)sub_80DD604;
  return v11;
}
