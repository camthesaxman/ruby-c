int __fastcall sub_81017A0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_80FEF74();
  sub_80FED1C();
  if ( (unsigned __int8)sub_80FEFA4() == 1 )
  {
    StringCopy(&gStringVar1, &asc_83EB6C5[32 * *(_BYTE *)(v20388D0 + v20388F5)]);
    StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"Œ‹›Á");
    DisplayItemMessageOnField(v1, (int)gStringVar4, (int)sub_8101824, 0);
  }
  else
  {
    DisplayItemMessageOnField(v1, (int)"Œ‹›Á", (int)sub_80FEFF4, 0);
  }
  return v3;
}
