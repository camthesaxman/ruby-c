signed int sub_80852FC()
{
  int v0; // r4@1
  unsigned __int8 v1; // r0@2
  _BYTE *v2; // r4@3
  unsigned __int8 v3; // r0@8
  _BYTE *v4; // r4@9
  signed __int16 v6; // [sp+0h] [bp-10h]@1

  PlayerGetDestCoords(&v6, &v6 + 1);
  v0 = (unsigned __int16)sub_8084D6C();
  if ( v0 != 0xFFFF )
  {
    v1 = MapGridGetMetatileBehaviorAt(v6, *(&v6 + 1));
    if ( (unsigned __int8)sub_8057468(v1) == 1 )
    {
      v2 = dword_839D458[5 * v0];
      if ( v2 )
      {
        if ( (sub_81344CC() & 0xFF) != 1 )
        {
          if ( (unsigned __int8)DoMassOutbreakEncounterTest() == 1 )
            SetUpMassOutbreakEncounter(0);
          else
            sub_8084EB0((int)v2, 0, 0);
          goto _080853D2;
        }
        goto _080853BC;
      }
    }
    else
    {
      v3 = MapGridGetMetatileBehaviorAt(v6, *(&v6 + 1));
      if ( (unsigned __int8)sub_8057494(v3) == 1 )
      {
        v4 = dword_839D458[5 * v0 + 1];
        if ( v4 )
        {
          if ( (sub_81344CC() & 0xFF) != 1 )
          {
            sub_8084EB0((int)v4, 1, 0);
_080853D2:
            sub_8081A00();
            return 1;
          }
_080853BC:
          sub_8081A5C();
          return 1;
        }
      }
    }
  }
  return 0;
}
