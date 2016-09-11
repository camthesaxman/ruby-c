signed int __fastcall sub_81469AC(_BYTE *a1, int a2)
{
  _BYTE *v2; // r6@1
  int v3; // r4@1
  signed int v4; // r5@1

  v2 = a1;
  v3 = a2;
  v4 = 1;
  if ( !a2 )
  {
    StringCopy(a1, &gUnknown_0842C571);
    v4 = 0;
  }
  if ( v3 == 2 )
    v4 = 0;
  if ( v3 == 1 )
    StringCopy(v2, "Цуеинтл");
  return v4;
}
