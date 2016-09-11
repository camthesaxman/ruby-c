int __fastcall sub_8126438(int a1)
{
  int v1; // r7@1
  _BOOL4 v2; // r8@1
  int v3; // r4@1
  char *v4; // r0@2
  unsigned __int8 *v5; // r1@2

  v1 = a1;
  v2 = sub_80B4940();
  v3 = script_read_word(v1) - *(_DWORD *)(v1 + 104) + *(_DWORD *)(v1 + 100);
  StringCopyN((int)&gStringVar1, 33720468, 7);
  sub_80B48A8(v3);
  StringCopyN((int)gStringVar2, 33720468, 7);
  if ( v2 )
  {
    if ( StringCompare(&gStringVar1, gStringVar2) )
    {
      v4 = gStringVar4;
      v5 = (unsigned __int8 *)&gUnknown_0842F7CA;
    }
    else
    {
      v4 = gStringVar4;
      v5 = (unsigned __int8 *)&gUnknown_0842F7F6;
    }
  }
  else
  {
    v4 = gStringVar4;
    v5 = (unsigned __int8 *)"…÷Ë’›‚Ÿÿ";
  }
  StringExpandPlaceholders(v4, v5);
  *(_DWORD *)(v1 + 108) = 2;
  if ( sub_80B4940() == 1 )
    VarSet(0x402Du, 1);
  else
    *(_DWORD *)(v1 + 108) = 1;
  return 0;
}
