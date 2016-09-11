signed int __fastcall CheckForCollisionBetweenFieldObjects(int a1, __int16 a2, __int16 a3)
{
  int v3; // r6@1
  __int16 v4; // r7@1
  unsigned int v5; // r4@1
  int v6; // r5@1
  int *v7; // r2@2

  v3 = a1;
  v4 = a2;
  v5 = 0;
  v6 = a3;
  do
  {
    v7 = &dword_30048A0[9 * v5];
    if ( *(_BYTE *)v7 << 31
      && v7 != (int *)v3
      && (*((_WORD *)v7 + 8) == v4 && *((_WORD *)v7 + 9) == v6 || *((_WORD *)v7 + 10) == v4 && *((_WORD *)v7 + 11) == v6)
      && AreZCoordsCompatible(*(_BYTE *)(v3 + 11) & 0xF, *((_BYTE *)v7 + 11) & 0xF) << 24 )
    {
      return 1;
    }
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 0xF );
  return 0;
}
