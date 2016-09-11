int __fastcall TrainerBattleLoadArgs(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r0@2
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  while ( 1 )
  {
    v4 = *(_BYTE *)(v2 + 4);
    if ( v4 <= 6 )
    {
      switch ( v4 )
      {
        case 0u:
          **(_BYTE **)v2 = TrainerBattleLoadArg8(v3++);
          break;
        case 1u:
          **(_WORD **)v2 = TrainerBattleLoadArg16(v3);
          v3 += 2;
          break;
        case 2u:
          **(_DWORD **)v2 = TrainerBattleLoadArg32(v3);
          v3 += 4;
          break;
        case 3u:
          **(_BYTE **)v2 = 0;
          break;
        case 4u:
          **(_WORD **)v2 = 0;
          break;
        case 5u:
          **(_DWORD **)v2 = 0;
          break;
        case 6u:
          **(_DWORD **)v2 = v3;
          return v6;
        default:
          break;
      }
    }
    v2 += 8;
  }
}
