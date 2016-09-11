int __fastcall CheckIfTrainerCanApproachPlayer(int a1)
{
  int v1; // r7@1
  int v2; // r4@2
  unsigned __int8 v3; // r0@2
  int result; // r0@2
  int v5; // r5@4
  int v6; // r4@5
  int v7; // r6@5
  unsigned int v8; // r4@5
  signed __int16 v9; // [sp+0h] [bp-1Ch]@1

  v1 = a1;
  PlayerGetDestCoords(&v9, &v9 + 1);
  if ( *(_BYTE *)(v1 + 7) == 1 )
  {
    v2 = *(int *)((char *)&gUnknown_0839B488[-1] + (4 * *(_BYTE *)(v1 + 24) & 0x3F));
    v3 = call_via_r4(v1, *(_BYTE *)(v1 + 29), v9, *(&v9 + 1));
    result = (unsigned __int8)CheckPathBetweenTrainerAndPlayer(v1, v3, *(_BYTE *)(v1 + 24) & 0xF);
  }
  else
  {
    v5 = 0;
    do
    {
      v6 = gUnknown_0839B488[v5];
      v7 = (unsigned __int8)call_via_r4(v1, *(_BYTE *)(v1 + 29), v9, *(&v9 + 1));
      v8 = (v5 + 1) & 0xFF;
      if ( CheckPathBetweenTrainerAndPlayer(v1, v7, v8) << 24 )
        return v7;
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v8 <= 3 );
    result = 0;
  }
  return result;
}
