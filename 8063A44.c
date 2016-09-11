int __fastcall FieldObjectCheckForReflectiveSurface(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r0@1
  unsigned int v4; // r4@1
  signed int v5; // r4@2
  signed int v6; // r6@2
  unsigned __int8 v7; // r0@2
  int result; // r0@2
  signed int v9; // r9@2
  unsigned __int8 v10; // r0@3
  int v11; // r2@4
  int v12; // r4@5
  unsigned __int8 v13; // r0@5
  unsigned __int8 v14; // r0@6
  unsigned __int8 v15; // r0@7
  unsigned __int8 v16; // r0@8
  unsigned int v17; // [sp+0h] [bp-28h]@1
  unsigned int v18; // [sp+4h] [bp-24h]@1

  v1 = a1;
  v2 = GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 5));
  v17 = (unsigned int)((*(_WORD *)(v2 + 8) + 8) << 12) >> 16;
  v3 = (*(_WORD *)(v2 + 10) + 8) << 12;
  v4 = 0;
  v18 = (unsigned int)v3 >> 16;
  if ( v3 >> 16 <= 0 )
  {
_08063B80:
    result = 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = v4 << 16;
      v6 = v5 >> 16;
      v7 = MapGridGetMetatileBehaviorAt(*(_WORD *)(v1 + 16), *(_WORD *)(v1 + 18) + 1 + (v5 >> 16));
      result = (unsigned __int8)GetReflectionTypeByMetatileBehavior(v7);
      v9 = v5;
      if ( result )
        break;
      v10 = MapGridGetMetatileBehaviorAt(*(_WORD *)(v1 + 20), *(_WORD *)(v1 + 22) + 1 + v6);
      result = (unsigned __int8)GetReflectionTypeByMetatileBehavior(v10);
      if ( result )
        break;
      LOWORD(v11) = 1;
      if ( (signed __int16)v17 > 1 )
      {
        do
        {
          v12 = (signed __int16)v11;
          v13 = MapGridGetMetatileBehaviorAt(*(_WORD *)(v1 + 16) + (signed __int16)v11, *(_WORD *)(v1 + 18) + 1 + v6);
          result = (unsigned __int8)GetReflectionTypeByMetatileBehavior(v13);
          if ( result )
            return result;
          v14 = MapGridGetMetatileBehaviorAt(*(_WORD *)(v1 + 16) - v12, *(_WORD *)(v1 + 18) + 1 + v6);
          result = (unsigned __int8)GetReflectionTypeByMetatileBehavior(v14);
          if ( result )
            return result;
          v15 = MapGridGetMetatileBehaviorAt(*(_WORD *)(v1 + 20) + v12, *(_WORD *)(v1 + 22) + 1 + v6);
          result = (unsigned __int8)GetReflectionTypeByMetatileBehavior(v15);
          if ( result )
            return result;
          v16 = MapGridGetMetatileBehaviorAt(*(_WORD *)(v1 + 20) - v12, *(_WORD *)(v1 + 22) + 1 + v6);
          result = (unsigned __int8)GetReflectionTypeByMetatileBehavior(v16);
          if ( result )
            return result;
          v11 = (v12 + 1) & 0xFFFF;
        }
        while ( (v12 + 1) << 16 < (signed int)(v17 << 16) );
      }
      v4 = (unsigned int)(v9 + 0x10000) >> 16;
      if ( v9 + 0x10000 >= (signed int)(v18 << 16) )
        goto _08063B80;
    }
  }
  return result;
}
