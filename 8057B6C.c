int __fastcall DrawWholeMapViewInternal(int a1, int a2, int a3)
{
  int v3; // r10@1
  int v4; // r9@1
  int v5; // r8@1
  unsigned int v6; // r1@1
  unsigned int v7; // r0@2
  int v8; // r6@4
  unsigned int v9; // r4@4
  unsigned int v10; // r5@4
  unsigned int v11; // r0@5
  unsigned __int8 v13; // [sp+0h] [bp-24h]@4
  int v14; // [sp+20h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  do
  {
    v7 = (v6 + (unsigned __int8)byte_3000593) & 0xFF;
    if ( v7 > 0x1F )
      v7 = (v7 - 32) & 0xFF;
    v8 = 32 * v7;
    v9 = 0;
    v13 = v6 + 2;
    v10 = v6 >> 1;
    do
    {
      v11 = (v9 + (unsigned __int8)byte_3000592) & 0xFF;
      if ( v11 > 0x1F )
        v11 = (v11 - 32) & 0xFF;
      DrawMetatileAt(v5, (v8 + v11) & 0xFFFF, (v9 >> 1) + v3, v4 + v10);
      v9 = (v9 + 2) & 0xFF;
    }
    while ( v9 <= 0x1F );
    v6 = v13;
  }
  while ( v13 <= 0x1Fu );
  return v14;
}
