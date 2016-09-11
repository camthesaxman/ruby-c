signed int MultistepInitMenuWindowContinue()
{
  if ( v202E9CC <= 4u )
  {
    switch ( v202E9CC )
    {
      case 0u:
        ++v202E9CC;
        return 0;
      case 1u:
        v202E9D0 = MultistepInitWindowTileData(v202E9C8, v202E9CE);
        goto LABEL_8;
      case 2u:
        if ( MultistepLoadFont() )
          goto LABEL_8;
        return 0;
      case 3u:
        v202E9D2 = SetTextWindowBaseTileNum(v202E9D0);
LABEL_8:
        ++v202E9CC;
        return 0;
      case 4u:
        LoadTextWindowGraphics(v202E9C8);
        v202E9D4 = SetMessageBoxBaseTileNum(v202E9D2);
        return 1;
      default:
        return 0;
    }
  }
  return 0;
}
