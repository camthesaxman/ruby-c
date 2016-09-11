int __fastcall dp05_ether(unsigned __int8 a1, __int16 a2, int a3)
{
  int v3; // r9@1
  int v4; // r6@1
  __int16 v5; // r5@1
  signed int v6; // r0@2
  signed int v7; // r8@4
  int v8; // r4@4
  int v10; // [sp+18h] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a2 == 175 )
    v6 = 33721770;
  else
    v6 = (signed int)*(&gItemEffectTable + (unsigned __int16)a2 - 13);
  v7 = v6;
  dword_3004B20[10 * v4] = (int)TaskDummy;
  v8 = (unsigned __int8)CreateTask(TaskDummy, 5);
  sub_806E8D0(v4, v5, v3);
  if ( *(_BYTE *)(v7 + 4) & 0x10 )
  {
    audio_play(5);
    sub_806D538(0xAu, 3);
    sub_80702E4(v201C005);
    dword_3004B20[10 * v8] = (int)sub_8070374;
    word_300179E = 0;
  }
  else
  {
    HIWORD(dword_3004B20[10 * v8 + 7]) = 0;
    ether_effect_related(v8);
  }
  return v10;
}
