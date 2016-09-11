int __fastcall sub_814A568(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int16)StringLength(a1) > 5u )
    SkipExtCtrlCodes(v1);
  else
    ConvertInternationalString((int)v1, 1);
  return v3;
}
