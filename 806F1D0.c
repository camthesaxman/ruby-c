int __fastcall sub_806F1D0(unsigned __int8 a1)
{
  int v1; // r6@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  StringCopy(&gStringVar2, &gMoveNames[13 * v201C008]);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F338);
  sub_806E834((int)&gStringVar4, 1u);
  sub_803FCD4(v201C000, 4u);
  if ( !v201B282 && v201C006 <= 0x152u )
    sub_80A9538(v201C006, 1);
  dword_3004B20[10 * v1] = (int)sub_806F254;
  return v3;
}
