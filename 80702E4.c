int __fastcall sub_80702E4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r6@1
  unsigned int v3; // r5@1
  int v4; // r7@1
  int v5; // r4@2
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  MenuDrawTextWindow(19, 10, 29, 19);
  v3 = 0;
  v4 = 25 * v1;
  do
  {
    v5 = (unsigned __int16)GetMonData((int)&dword_3004360[v4], v3 + 13, (int)dword_3004360);
    MenuPrint(&gMoveNames[13 * v5], 20, ((v3 << 25) + 184549376) >> 24);
    if ( v5 )
      v2 = (v2 + 1) & 0xFF;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 3 );
  InitMenu(0, 20, 11, v2);
  return v7;
}
