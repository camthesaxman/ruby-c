int __fastcall sub_806F6B4(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  unsigned int v3; // r6@1
  char v4; // r0@1
  int *v5; // r0@2
  int (__fastcall *v6)(unsigned __int8); // r1@2
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  v4 = ProcessMenuInputNoWrap_();
  if ( !v4 )
  {
    MenuZeroFillWindowRect(23, 8, 29, 13);
    GetMonNickname(v201C000, (int)&gStringVar1);
    StringCopy(&gStringVar2, &gMoveNames[13 * v201C008]);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F409);
    sub_806E834((int)&gStringVar4, 1u);
    v5 = &dword_3004B20[10 * v2];
    v6 = sub_806F2FC;
_0806F78E:
    *v5 = (int)v6;
    return v8;
  }
  if ( v4 == 1 || v4 == -1 )
  {
    if ( v4 == -1 )
      audio_play(5);
    MenuZeroFillWindowRect(23, 8, 29, 13);
    GetMonNickname(v201C000, (int)&gStringVar1);
    StringCopy(&gStringVar2, &gMoveNames[13 * v201C008]);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F37C);
    sub_806E834((int)&gStringVar4, 1u);
    v5 = &dword_3004B20[10 * v3];
    v6 = sub_806F358;
    goto _0806F78E;
  }
  return v8;
}
