int SortSprites()
{
  signed int v0; // r12@1
  int v1; // r5@2
  int v2; // r2@2
  char *v3; // r3@2
  int v4; // r1@2
  char *v5; // r4@2
  unsigned int v6; // r6@2
  int v7; // r1@2
  int v8; // r2@2
  signed int v9; // r0@2
  unsigned int v10; // r0@7
  unsigned int v11; // r0@12
  char v12; // r4@20
  char *v13; // r1@20
  int v14; // r2@20
  char *v15; // r3@20
  int v16; // r1@20
  char *v17; // r4@20
  unsigned int v18; // r6@20
  signed int v19; // r0@20
  unsigned int v20; // r0@25
  unsigned int v21; // r0@30
  unsigned int v23; // [sp+0h] [bp-24h]@2
  unsigned int v24; // [sp+0h] [bp-24h]@20
  int v25; // [sp+20h] [bp-4h]@0

  v0 = 1;
  do
  {
    v1 = v0;
    v2 = (unsigned __int8)gSpriteOrder[v0 - 1];
    v3 = &gSprites[68 * v2];
    v4 = (unsigned __int8)gSpriteOrder[v0];
    v5 = &gSprites[68 * v4];
    v23 = (unsigned __int16)gSpritePriorities[v2];
    v6 = (unsigned __int16)gSpritePriorities[v4];
    v7 = (unsigned __int8)*v3;
    v8 = (unsigned __int8)*v5;
    v9 = (unsigned __int8)*v3;
    if ( v9 > 159 )
      v7 = (v9 - 256) & 0xFFFF;
    if ( (signed __int16)v8 > 159 )
      v8 = ((signed __int16)v8 - 256) & 0xFFFF;
    if ( (*(_DWORD *)v3 & 0xC0000300) == -1073741056 )
    {
      v10 = (unsigned int)(unsigned __int8)v3[1] >> 6;
      if ( (!v10 || v10 == 2) && (signed __int16)v7 > 128 )
        v7 = ((signed __int16)v7 - 256) & 0xFFFF;
    }
    if ( (*(_DWORD *)v5 & 0xC0000300) == -1073741056 )
    {
      v11 = (unsigned int)(unsigned __int8)v5[1] >> 6;
      if ( (!v11 || v11 == 2) && (signed __int16)v8 > 128 )
        v8 = ((signed __int16)v8 - 256) & 0xFFFF;
    }
    LOBYTE(v0) = v0 + 1;
    if ( v1 )
    {
      if ( v23 > v6 )
        goto LABEL_20;
      if ( v23 == v6 )
      {
LABEL_37:
        if ( v7 << 16 < v8 << 16 )
        {
          while ( 1 )
          {
LABEL_20:
            v12 = gSpriteOrder[v1];
            v13 = &gSpriteOrder[v1 - 1];
            gSpriteOrder[v1] = *v13;
            *v13 = v12;
            v1 = (v1 - 1) & 0xFF;
            v14 = (unsigned __int8)gSpriteOrder[v1 - 1];
            v15 = &gSprites[68 * v14];
            v16 = (unsigned __int8)gSpriteOrder[v1];
            v17 = &gSprites[68 * v16];
            v24 = (unsigned __int16)gSpritePriorities[v14];
            v18 = (unsigned __int16)gSpritePriorities[v16];
            v7 = (unsigned __int8)*v15;
            v8 = (unsigned __int8)*v17;
            v19 = (unsigned __int8)*v15;
            if ( v19 > 159 )
              v7 = (v19 - 256) & 0xFFFF;
            if ( (signed __int16)v8 > 159 )
              v8 = ((signed __int16)v8 - 256) & 0xFFFF;
            if ( (*(_DWORD *)v15 & 0xC0000300) == -1073741056 )
            {
              v20 = (unsigned int)(unsigned __int8)v15[1] >> 6;
              if ( (!v20 || v20 == 2) && (signed __int16)v7 > 128 )
                v7 = ((signed __int16)v7 - 256) & 0xFFFF;
            }
            if ( (*(_DWORD *)v17 & 0xC0000300) == -1073741056 )
            {
              v21 = (unsigned int)(unsigned __int8)v17[1] >> 6;
              if ( (!v21 || v21 == 2) && (signed __int16)v8 > 128 )
                v8 = ((signed __int16)v8 - 256) & 0xFFFF;
            }
            if ( !v1 )
              break;
            if ( v24 <= v18 )
            {
              if ( v24 != v18 )
                break;
              goto LABEL_37;
            }
          }
        }
      }
    }
    v0 = (unsigned __int8)v0;
  }
  while ( (unsigned __int8)v0 <= 0x3Fu );
  return v25;
}
