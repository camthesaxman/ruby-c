int __fastcall sub_805A6DC(int a1)
{
  int v1; // r5@1
  int *v2; // r4@4
  char *v3; // r0@6
  unsigned __int8 v4; // r0@8

  v1 = a1;
  if ( *(_WORD *)(a1 + 10) )
    goto _0805A780;
  sub_805A954(0);
  if ( *(_WORD *)(v1 + 10) )
    goto _0805A780;
  if ( !(MenuUpdateWindowText() << 24) )
  {
    if ( !*(_WORD *)(v1 + 10) )
      return 0;
_0805A780:
    v202E85E = 0;
    script_env_2_disable(0);
    sub_808541C(*(_WORD *)(v1 + 38) & 0xFF);
    sub_80BE97C(1);
    v4 = FindTaskIdByFunc(sub_805A37C);
    DestroyTask(v4);
    return 0;
  }
  v2 = &dword_30048A0[9 * v202E85D];
  sub_805B980(v2, *(_WORD *)(v1 + 36) & 0xFF);
  FieldObjectTurn(v2, (unsigned int)*((_BYTE *)v2 + 24) >> 4);
  if ( v202E858 & 8 )
    sub_8127F28(BYTE2(dword_30048A0[9 * v202E85D + 6]), 0, 0);
  *(_WORD *)&gSprites[68 * v202E85C + 36] = 0;
  v3 = &gSprites[68 * v202E85C];
  *((_WORD *)v3 + 19) = 0;
  MenuZeroFillScreen(v3);
  ++*(_WORD *)(v1 + 10);
  return 0;
}
