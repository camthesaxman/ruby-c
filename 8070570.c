int __fastcall ether_effect_related(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r7@1
  unsigned __int16 v3; // r0@3
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( ExecuteTableBasedItemEffect__(v201C005, v201C006, *((_BYTE *)v2 + 30)) << 24 )
  {
    v202E8F4 = 0;
    audio_play(5);
    sub_806E834((int)&gUnknown_0840EF85, 1u);
  }
  else
  {
    v202E8F4 = 1;
    audio_play(1);
    sub_80A9538(v201C006, 1);
    v3 = GetMonData(v201C000, *((_WORD *)v2 + 15) + 13, 30);
    StringCopy(&gStringVar1, &gMoveNames[13 * v3]);
    GetMedicineItemEffectMessage(v201C006);
    sub_806E834((int)&gStringVar4, 1u);
  }
  dword_3004B20[10 * v1] = (int)sub_806FB0C;
  return v5;
}
