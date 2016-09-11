int __fastcall brm_trade_1(_BYTE *a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE *v4; // r5@1
  int v5; // r4@1
  char v6; // r7@1
  unsigned __int8 v7; // r6@1
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+14h] [bp-4h]@4

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  memcpy(&v9, (const char *)&gUnknown_083E5A18, 4);
  if ( v5 == 255 )
  {
    StringCopy(gStringVar4, v4);
  }
  else
  {
    BYTE2(v9) = v5;
    StringCopy(gStringVar4, &v9);
    StringAppend(gStringVar4, v4);
    BYTE2(v9) = *(_BYTE *)(v202E9C8 + 6);
    StringAppend(gStringVar4, &v9);
  }
  MenuPrint((int)gStringVar4, v6, v7);
  return v10;
}
