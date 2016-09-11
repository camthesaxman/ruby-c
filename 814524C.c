int __fastcall sub_814524C(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int16 a4, int a5)
{
  int v5; // r10@1
  int v6; // r5@1
  unsigned int v7; // r4@2
  unsigned __int8 v8; // r8@2
  int v10; // [sp+0h] [bp-2Ch]@1
  int v11; // [sp+4h] [bp-28h]@1
  int v12; // [sp+8h] [bp-24h]@1
  int v13; // [sp+28h] [bp-4h]@0

  v10 = a1;
  v5 = a2;
  v11 = a3;
  v12 = a4;
  v6 = 0;
  do
  {
    v7 = 0;
    v8 = v6 + 1;
    do
    {
      *(_WORD *)(2 * (v5 + v7) + ((v11 + v6) << 6) + v12 + 100663296) = sub_8145208(*(_BYTE *)(v10 + 3 * v6 + v7))
                                                                      + ((unsigned int)(a5 << 16) >> 20 << 12);
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 <= 2 );
    v6 = (unsigned __int8)(v6 + 1);
  }
  while ( v8 <= 4u );
  return v13;
}
