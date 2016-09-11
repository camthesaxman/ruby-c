int __fastcall sub_80CAA14(int a1)
{
  int v1; // r5@1
  char v2; // r0@1
  __int16 v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = Random();
  StartSpriteAnim(v1, v2 & 7);
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    v3 = *(_WORD *)(v1 + 32) - 20;
  else
    v3 = *(_WORD *)(v1 + 32) + 20;
  *(_WORD *)(v1 + 32) = v3;
  *(_WORD *)(v1 + 46) = (Random() & 0x1F) + 64;
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  sub_8078D60(v1);
  *(_WORD *)(v1 + 56) = (unsigned __int8)Random();
  *(_WORD *)(v1 + 58) = *(_BYTE *)(v1 + 67);
  *(_DWORD *)(v1 + 28) = sub_80CAACC;
  call_via_r1(v1, sub_80CAACC);
  return v5;
}
