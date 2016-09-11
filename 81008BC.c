int __fastcall sub_81008BC(int a1)
{
  int v1; // r8@1
  unsigned int v2; // r6@1
  int v3; // r5@1
  int v5; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = 16 * *(_BYTE *)(*(_DWORD *)a1 + 18);
  if ( (unsigned int)*((_BYTE *)&gUnknown_083EC860 + v3 + 12) > 0 )
  {
    do
    {
      *(_WORD *)(v1 + 4 + 2 * (*(_BYTE **)((char *)&gUnknown_083EC860 + v3))[v2]) = sub_810089C((8
                                                                                               * *(_WORD *)(2 * (*(_BYTE **)((char *)&off_83EC864 + v3))[v2] + *(_DWORD *)(*(_DWORD *)v1 + 28))
                                                                                               + (*(_BYTE **)((char *)&off_83EC868 + v3))[v2]) & 0xFFFF);
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 < *((_BYTE *)&gUnknown_083EC860 + v3 + 12) );
  }
  return v5;
}
