int __fastcall itemid_copy_name(int a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1
  _BYTE *v3; // r0@2
  _BYTE *v4; // r0@3
  int v6; // [sp+4h] [bp-4h]@0

  v2 = a2;
  a1 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 == 175 )
  {
    v3 = (_BYTE *)GetBerryInfo(43);
    StringCopy(v2, v3);
    StringAppend(v2, &OtherText_Berry2);
  }
  else
  {
    v4 = (_BYTE *)itemid_get_item(a1);
    StringCopy(v2, v4);
  }
  return v6;
}
