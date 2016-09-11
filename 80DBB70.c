int __fastcall sub_80DBB70(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  unsigned int v3; // r4@1
  int v4; // r0@1
  int v5; // r7@1
  __int16 v6; // r0@3
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = sub_807A100(v202F7C8, 1u);
  v3 = ((signed __int16)v2 + ((unsigned int)(v2 << 16) >> 31)) << 15 >> 16;
  v4 = sub_807A100(v202F7C8, 0);
  v5 = 0xFFFF * ((signed int)((signed __int16)v4 + ((unsigned int)(v4 << 16) >> 31)) >> 1) & 0xFFFF;
  if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 )
    v3 = 0xFFFF * v3 & 0xFFFF;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) + (_WORD)v3;
  v6 = (unsigned __int8)sub_8077ABC(v202F7C8, 3u) + (_WORD)v5;
  *(_WORD *)(v1 + 34) = v6;
  if ( v6 <= 15 )
    *(_WORD *)(v1 + 34) = 16;
  oamt_set_x3A_32(v1, (int)sub_80DBC00);
  *(_DWORD *)(v1 + 28) = sub_8078600;
  return v8;
}
