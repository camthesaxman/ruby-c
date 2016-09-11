int __fastcall DrawMetatile(signed int a1, int a2, unsigned __int16 a3)
{
  int v3; // r6@1
  int v4; // r4@7
  int v5; // r3@7
  int v6; // r2@7
  int v7; // r5@8
  int v8; // r4@8
  int v9; // r3@8
  int v10; // r5@4
  int v11; // r4@4
  int v12; // r3@4
  __int16 *v13; // r3@4
  __int16 v14; // r0@4
  int v16; // [sp+18h] [bp-4h]@0

  v3 = a3;
  if ( a1 == 1 )
  {
    gBG3TilemapBuffer[a3] = *(_WORD *)a2;
    v7 = a3 + 1;
    gBG3TilemapBuffer[v7] = *(_WORD *)(a2 + 2);
    v8 = a3 + 32;
    gBG3TilemapBuffer[v8] = *(_WORD *)(a2 + 4);
    v9 = a3 + 33;
    gBG3TilemapBuffer[v9] = *(_WORD *)(a2 + 6);
    gBG2TilemapBuffer[a3] = *(_WORD *)(a2 + 8);
    gBG2TilemapBuffer[v7] = *(_WORD *)(a2 + 10);
    gBG2TilemapBuffer[v8] = *(_WORD *)(a2 + 12);
    gBG2TilemapBuffer[v9] = *(_WORD *)(a2 + 14);
    v14 = 0;
    gBG1TilemapBuffer[a3] = 0;
    gBG1TilemapBuffer[v7] = 0;
    gBG1TilemapBuffer[v8] = 0;
    v13 = &gBG1TilemapBuffer[v9];
_0805800E:
    *v13 = v14;
    return v16;
  }
  if ( a1 <= 1 )
  {
    if ( a1 )
      return v16;
    gBG3TilemapBuffer[a3] = 12308;
    v10 = a3 + 1;
    gBG3TilemapBuffer[v10] = 12308;
    v11 = a3 + 32;
    gBG3TilemapBuffer[v11] = 12308;
    v12 = a3 + 33;
    gBG3TilemapBuffer[v12] = 12308;
    gBG2TilemapBuffer[a3] = *(_WORD *)a2;
    gBG2TilemapBuffer[v10] = *(_WORD *)(a2 + 2);
    gBG2TilemapBuffer[v11] = *(_WORD *)(a2 + 4);
    gBG2TilemapBuffer[v12] = *(_WORD *)(a2 + 6);
    gBG1TilemapBuffer[a3] = *(_WORD *)(a2 + 8);
    gBG1TilemapBuffer[v10] = *(_WORD *)(a2 + 10);
    gBG1TilemapBuffer[v11] = *(_WORD *)(a2 + 12);
    v13 = &gBG1TilemapBuffer[v12];
    v14 = *(_WORD *)(a2 + 14);
    goto _0805800E;
  }
  if ( a1 == 2 )
  {
    gBG3TilemapBuffer[a3] = *(_WORD *)a2;
    v4 = a3 + 1;
    gBG3TilemapBuffer[v4] = *(_WORD *)(a2 + 2);
    v5 = a3 + 32;
    gBG3TilemapBuffer[v5] = *(_WORD *)(a2 + 4);
    v6 = a3 + 33;
    gBG3TilemapBuffer[v6] = *(_WORD *)(a2 + 6);
    gBG2TilemapBuffer[v3] = 0;
    gBG2TilemapBuffer[v4] = 0;
    gBG2TilemapBuffer[v5] = 0;
    gBG2TilemapBuffer[v6] = 0;
    gBG1TilemapBuffer[v3] = *(_WORD *)(a2 + 8);
    gBG1TilemapBuffer[v4] = *(_WORD *)(a2 + 10);
    gBG1TilemapBuffer[v5] = *(_WORD *)(a2 + 12);
    gBG1TilemapBuffer[v6] = *(_WORD *)(a2 + 14);
  }
  return v16;
}
