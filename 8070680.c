int __fastcall sub_8070680(int a1, __int16 a2, int a3)
{
  int v3; // r6@1
  int v4; // r2@1
  int v5; // r2@1
  unsigned int v6; // r4@2
  signed int v7; // r0@4
  int v8; // r2@8
  unsigned __int8 v9; // r0@8
  int v11; // [sp+10h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v3 = (unsigned __int16)a2;
  dword_3004B20[10 * a1] = (int)TaskDummy;
  sub_806E8D0(a1, a2, a3);
  if ( GetMonData(v201C000, 56, v4) == 100 )
  {
    v7 = 1;
  }
  else
  {
    v6 = 0;
    do
    {
      *(_WORD *)(2 * v6 + 0x201B264) = GetMonData(v201C000, (unsigned __int8)gUnknown_08376D1C[v6], v5);
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 <= 5 );
    v7 = (unsigned __int8)ExecuteTableBasedItemEffect__(v201C005, v3, 0);
  }
  if ( v7 )
  {
    v202E8F4 = 0;
    audio_play(5);
    sub_806E834((int)&gUnknown_0840EF85, 1u);
    CreateTask(sub_806FB0C, 5);
  }
  else
  {
    v202E8F4 = 1;
    pause_music_for_sound_maybe(0);
    sub_8070A20(v201C005, v201C000);
    sub_80A9538(v3, 1);
    GetMonNickname(v201C000, (int)&gStringVar1);
    v9 = GetMonData(v201C000, 56, v8);
    ConvertIntToDecimalStringN((char *)&gStringVar2, v9, 0, 3);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F5A6);
    sub_806E834((int)&gStringVar4, 1u);
    CreateTask(sub_80707A0, 5);
  }
  return v11;
}
