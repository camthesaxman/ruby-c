int __fastcall sub_80FF5BC(unsigned __int8 a1)
{
  int v1; // r5@1
  char *v2; // r1@4
  int *v3; // r0@7
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( v201F009 == 1 && v20388F6 != 6 && v20388F6 != 7 )
  {
    sub_80FEF74();
    sub_80FED1C();
    v2 = "Œ‹›Á";
_080FF66E:
    DisplayItemMessageOnField(v1, (int)v2, (int)sub_80FEFF4, 0);
    return v5;
  }
  if ( (unsigned __int8)sub_80FEFA4() != 1 )
  {
    sub_80FEF74();
    sub_80FED1C();
    DisplayItemMessageOnField(v1, (int)"Œ‹›Á", (int)sub_80FEFF4, 0);
    return v5;
  }
  if ( (unsigned __int8)sub_80FF58C() != 1 )
  {
    sub_80FEF74();
    sub_80FED1C();
    ConvertIntToDecimalStringN(&gStringVar1, v201F008, 1, 2);
    if ( v201F009 )
      StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0840FB57);
    else
      StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0840FB11);
    v2 = gStringVar4;
    goto _080FF66E;
  }
  fade_screen(1, 0);
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 6) = 0;
  *v3 = (int)sub_80FF6AC;
  return v5;
}
