int __fastcall sub_80D3698(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  char v3; // r0@4
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u);
  *(_WORD *)(v1 + 38) = -10;
  v2 = (unsigned __int8)sub_8079E90(v202F7C8);
  if ( sub_8076BE0() << 24 )
  {
    *(_WORD *)(v1 + 36) = -10;
    goto _080D36F4;
  }
  if ( !(battle_side_get_owner(v202F7C8) << 24) )
  {
    *(_WORD *)(v1 + 36) = 10;
_080D36F4:
    v3 = v2 + 2;
    goto _080D36F6;
  }
  *(_WORD *)(v1 + 36) = -10;
  v3 = v2 - 2;
_080D36F6:
  *(_BYTE *)(v1 + 67) = v3;
  *(_DWORD *)(v1 + 28) = sub_80D370C;
  return v5;
}
