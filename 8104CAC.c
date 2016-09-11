int __fastcall sub_8104CAC(int a1)
{
  int v1; // r4@1
  int *v2; // r7@1
  int v3; // r6@1
  int v4; // r5@1
  int v6; // [sp+14h] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  sub_8104DA4(a1);
  v2 = &dword_3004B20[10 * v200003D];
  *((_WORD *)v2 + 5) = v1;
  v3 = 0;
  v4 = 4 * v1;
  if ( *(_BYTE *)*(&gUnknown_083ED048 + v1) != 255 )
  {
    do
    {
      *((_WORD *)v2 + v3 + 4 + 4) = (unsigned __int8)sub_8105BB4(
                                                       (*(_BYTE **)((char *)&gUnknown_083ED048 + v4))[4 * v3],
                                                       (*(_BYTE **)((char *)&gUnknown_083ED048 + v4))[4 * v3 + 1],
                                                       (*(_WORD **)((char *)&gUnknown_083ED048 + v4))[2 * v3 + 1]);
      v3 = (v3 + 1) & 0xFF;
    }
    while ( (*(_BYTE **)((char *)&gUnknown_083ED048 + v4))[4 * v3] != 255 );
  }
  return v6;
}
