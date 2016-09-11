int __fastcall sub_80C9098(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v6; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  StringExpandPlaceholders(&gStringVar4, a3);
  if ( v4 )
  {
    DisplayItemMessageOnField(v3, &gStringVar4, sub_80A5C9C, 0);
  }
  else
  {
    MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
    DisplayItemMessageOnField(v3, &gStringVar4, sub_80A5C48, 1);
  }
  return v6;
}
