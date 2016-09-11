signed int __fastcall sub_8085104(unsigned __int16 a1, int a2)
{
  int v2; // r6@1
  int v3; // r9@1
  unsigned int v4; // r1@1
  unsigned int v5; // r7@1
  unsigned int v6; // r8@1
  int v7; // r5@2

  v2 = a1;
  v3 = a1;
  v4 = a2 << 16;
  v5 = v4 >> 16;
  v6 = v4 >> 16;
  if ( v202FF7C != 1 )
  {
    v7 = (unsigned __int16)sub_8084D6C();
    if ( v7 != 0xFFFF )
    {
      if ( (unsigned __int8)sub_8057468((unsigned __int8)v2) == 1 )
      {
        if ( !dword_839D458[5 * v7]
          || v5 != v2 && !(DoGlobalWildEncounterDiceRoll() << 24)
          || (unsigned __int8)sub_8085054(*dword_839D458[5 * v7], 0) != 1 )
        {
          return 0;
        }
        if ( (sub_81344CC() & 0xFF) != 1 )
        {
          if ( ((unsigned __int8)DoMassOutbreakEncounterTest() != 1
             || (unsigned __int8)SetUpMassOutbreakEncounter(1) != 1)
            && (unsigned __int8)sub_8084EB0((int)dword_839D458[5 * v7], 0, 1u) != 1 )
          {
            return 0;
          }
_0808527A:
          sub_8081A00();
          return 1;
        }
_0808524A:
        if ( sub_8085598(v2028884) << 24 )
        {
          sub_8081A5C();
          return 1;
        }
        return 0;
      }
      if ( (unsigned __int8)sub_8057494((unsigned __int8)v2) != 1
        && (!(TestPlayerAvatarFlags(8u) << 24) || (unsigned __int8)sub_8057434((unsigned __int8)v2) != 1)
        || !dword_839D458[5 * v7 + 1]
        || v6 != v3 && !(DoGlobalWildEncounterDiceRoll() << 24)
        || (unsigned __int8)sub_8085054(*dword_839D458[5 * v7 + 1], 0) != 1 )
      {
        return 0;
      }
      if ( (sub_81344CC() & 0xFF) == 1 )
        goto _0808524A;
      if ( (unsigned __int8)sub_8084EB0((int)dword_839D458[5 * v7 + 1], 1, 1u) == 1 )
        goto _0808527A;
    }
  }
  return 0;
}
