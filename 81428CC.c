int sub_81428CC()
{
  int v0; // r0@3
  char *v1; // r1@4
  int v3; // [sp+8h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC > 5u )
  {
def_81428E2:
    v0 = SetVBlankCallback(0);
    sub_81433E0(v0);
    byte_3001BAC = 1;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_81428E2;
      case 1:
        sub_8143570();
        v1 = &byte_3001BAC;
        goto _081429DC;
      case 2:
        SetVBlankCallback((int)sub_8141E38);
        v4000200 |= 1u;
        v4000004 |= 8u;
        v1 = &byte_3001BAC;
        goto _081429DC;
      case 3:
        v4000050 = 0;
        v4000052 = 0;
        v4000054 = 0;
        sub_81435B8();
        v201C000 = 65668074;
        v201C004 = 0;
        v201C008 = 0;
        v201C00C = 0;
        v201C010 = 0;
        sub_80C5CD4(33669120);
        v1 = &byte_3001BAC;
        goto _081429DC;
      case 4:
        AnimateSprites();
        BuildOamBuffer();
        UpdatePaletteFade();
        if ( sub_80C5DCC() << 24 )
        {
          v1 = &byte_3001BAC;
_081429DC:
          ++*v1;
        }
        break;
      case 5:
        v4000050 = 16194;
        v4000052 = 1808;
        v4000054 = 0;
        CreateTask((int)sub_8142A28, 0);
        SetMainCallback2((int)sub_8141E4C);
        break;
    }
  }
  return v3;
}
