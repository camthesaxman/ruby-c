int __fastcall ItemUseOutOfBattle_BlackWhiteFlute(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int *v3; // r1@2
  int v4; // r0@2
  int v5; // r0@5
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( v203855E == 43 )
  {
    FlagSet(0x84Du);
    FlagReset(0x84Eu);
    sub_80CA07C();
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EA95);
    v3 = dword_3004B20;
    v4 = 5 * v1;
_080CA146:
    v5 = (int)&v3[2 * v4];
    *(_DWORD *)v5 = sub_80CA098;
    *(_WORD *)(v5 + 38) = 0;
    return v7;
  }
  if ( v203855E == 42 )
  {
    FlagSet(0x84Eu);
    FlagReset(0x84Du);
    sub_80CA07C();
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EAC3);
    v3 = dword_3004B20;
    v4 = 5 * v2;
    goto _080CA146;
  }
  return v7;
}
