int __fastcall sub_8131564(int a1)
{
  int v1; // r5@1
  signed __int16 v2; // r4@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C9) << 24 )
  {
    *(_BYTE *)(v1 + 67) = sub_8079E90(v202F7C9) + 2;
    v2 = -96;
  }
  else
  {
    *(_BYTE *)(v1 + 67) = sub_8079E90(v202F7C9) - 2;
    v2 = -144;
  }
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  *(_WORD *)(v1 + 38) = v2;
  *(_DWORD *)(v1 + 28) = sub_81315C8;
  return v4;
}
