int __fastcall sub_807A908(int a1)
{
  int v1; // r5@1
  signed __int16 v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    v2 = -10;
  else
    v2 = 5;
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 48) = -40;
  *(_DWORD *)(v1 + 28) = sub_807A960;
  return v4;
}
