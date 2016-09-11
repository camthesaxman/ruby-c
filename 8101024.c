int __fastcall sub_8101024(unsigned __int8 a1)
{
  int v1; // r5@1
  const char *v2; // r1@2
  int (*v3)(); // r2@2
  unsigned int v4; // r0@3
  unsigned int v5; // r4@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8101460(a1);
  if ( v2039234 )
  {
    v2 = "ÌÙèéæâ";
    v3 = sub_8101518;
  }
  else
  {
    v4 = MapGridGetMetatileBehaviorAt(*(_WORD *)&byte_3004B28[40 * v1], *(_WORD *)&byte_3004B28[40 * v1 + 2]) << 24;
    v5 = v4 >> 24;
    if ( (unsigned __int8)sub_8057238(BYTE3(v4)) != 1 && (unsigned __int8)sub_805738C(v5) != 1 )
    {
      DisplayItemMessageOnField(v1, (int)"ÎÜÙæÙ", (int)sub_81010F0, 0);
      return v7;
    }
    gSprites[68 * v20391A8 + 62] &= 0xFBu;
    dword_2020020[17 * v20391A8] = (int)SpriteCallbackDummy;
    v2 = "Íèãä";
    v3 = sub_810156C;
  }
  DisplayItemMessageOnField(v1, (int)v2, (int)v3, 0);
  return v7;
}
