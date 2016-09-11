signed int __fastcall sub_810CB68(unsigned __int8 a1, _BYTE *a2)
{
  _BYTE *v2; // r6@1
  unsigned __int8 v3; // r5@1
  unsigned int v4; // r4@1

  v2 = a2;
  v3 = a1;
  v4 = 0;
  do
  {
    if ( sub_810CAE4(v3, (int)&gUnknown_083F7F9C + 8 * v4) << 16 > 0 )
    {
      StringCopy(v2, (&gUnknown_083F7EB8)[4 * (v4 + 1)]);
      return 1;
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 4 );
  return 0;
}
