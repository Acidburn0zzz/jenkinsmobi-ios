// Copyright (C) 2012 LMIT Limited
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and 
// limitations under the License.

#import "HomeHudsonXmlParser.h"

@implementation HomeHudsonXmlParser

-(void)parser:(NSXMLParser *)parser didStartElement:(NSString *)elementName namespaceURI:(NSString *) namespaceURI qualifiedName:(NSString *)qName
   attributes: (NSDictionary *)attributeDict{

	if(currentReadCharacters!=nil){
	
		[currentReadCharacters release];
		currentReadCharacters = nil;
	}
}

-(void)parser:(NSXMLParser *)parser didEndElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName{
	
	if([elementName isEqualToString:@"assignedLabel"]){
		
		[currentObject setAssignedLabel:currentReadCharacters];
	}else if([elementName isEqualToString:@"mode"]){

		[currentObject setMode:currentReadCharacters];
	}else if([elementName isEqualToString:@"nodeDescription"]){
		
		[currentObject setNodeDescription:currentReadCharacters];	
	}else if([elementName isEqualToString:@"nodeName"]){
		
		[currentObject setNodeName:currentReadCharacters];		
	}else if([elementName isEqualToString:@"numExecutors"]){
		
		[currentObject setNumExecutors:[currentReadCharacters intValue]];		
	}else if([elementName isEqualToString:@"description"]){

		[currentObject setDescription:currentReadCharacters];		
	}
}

@end
